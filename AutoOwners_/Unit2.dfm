object Form2: TForm2
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093' - '#1057#1074#1077#1076#1077#1085#1080#1103' '#1086' '#1072#1074#1090#1086#1074#1083#1072#1076#1077#1083#1100#1094#1072#1093
  ClientHeight = 389
  ClientWidth = 1145
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 754
    Top = 8
    Width = 373
    Height = 317
    Center = True
    Constraints.MaxHeight = 317
    Constraints.MaxWidth = 373
  end
  object Button5: TButton
    Left = 754
    Top = 331
    Width = 373
    Height = 42
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1092#1086#1090#1086
    TabOrder = 0
    OnClick = Button5Click
  end
  object Memo1: TMemo
    Left = 296
    Top = -11
    Width = 185
    Height = 27
    TabOrder = 1
    Visible = False
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 740
    Height = 365
    ColCount = 9
    RowCount = 2
    PopupMenu = PopupMenu1
    TabOrder = 2
    OnClick = StringGrid1Click
    OnSelectCell = StringGrid1SelectCell
    ColWidths = (
      64
      104
      161
      66
      78
      69
      68
      60
      81)
  end
  object OpenDialog1: TOpenDialog
    Filter = #1058#1077#1082#1089#1090#1086#1074#1099#1077' '#1092#1072#1081#1083#1099'|*.txt|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Left = 264
    Top = 65528
  end
  object SaveDialog1: TSaveDialog
    Filter = #1058#1077#1082#1089#1090#1086#1074#1099#1077' '#1092#1072#1081#1083#1099'|*.txt|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Left = 232
    Top = 65528
  end
  object MainMenu1: TMainMenu
    Left = 200
    Top = 65528
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1057#1095#1080#1090#1072#1090#1100' '#1080#1079' '#1092#1072#1081#1083#1072
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1047#1072#1087#1080#1089#1072#1090#1100' '#1074' '#1092#1072#1081#1083
        OnClick = N3Click
      end
      object N4: TMenuItem
        Caption = '-'
      end
      object N8: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        OnClick = N8Click
      end
    end
    object N9: TMenuItem
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
      object N5: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1086#1074#1086#1075#1086' '#1072#1074#1090#1086#1074#1083#1072#1076#1077#1083#1100#1094#1072
        OnClick = N5Click
      end
      object N12: TMenuItem
        Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1076#1072#1085#1085#1099#1077' '#1072#1074#1090#1086#1074#1083#1072#1076#1077#1083#1100#1094#1072
        OnClick = N12Click
      end
      object N6: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100' '#1076#1072#1085#1085#1099#1077' '#1072#1074#1090#1086#1074#1083#1072#1076#1077#1083#1100#1094#1072
        OnClick = N6Click
      end
      object N10: TMenuItem
        Caption = '-'
      end
      object N11: TMenuItem
        Caption = #1055#1086#1083#1091#1095#1080#1090#1100' '#1080#1084#1077#1085#1072' '#1074#1089#1077#1093' '#1072#1074#1090#1086#1074#1083#1072#1076#1077#1083#1100#1094#1077#1074
        OnClick = N11Click
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 168
    Top = 65528
    object N13: TMenuItem
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
      OnClick = N13Click
    end
    object N14: TMenuItem
      Caption = #1059#1076#1072#1083#1080#1090#1100
      OnClick = N14Click
    end
  end
end
